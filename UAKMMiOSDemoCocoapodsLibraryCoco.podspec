Pod::Spec.new do |spec|
    spec.name                     = 'UAKMMiOSDemoCocoapodsLibraryCoco'
    spec.version                  = '0.1.0'
    spec.homepage                 = 'https://github.com/basava-litmus7/UA-KMM-iOS-Demo-Cocoapods-Library.git'
    spec.source                   = { :http=> ''}
    spec.authors                  = {'Basavaraj Sarwad' => 'basavaraj.g@litmus7.com'}
    spec.license                  = 'MIT'
    spec.summary                  = 'Amplitude And Datadog Analytics Library'
    spec.vendored_frameworks      = 'build/cocoapods/framework/UAKMMiOSDemoCocoapodsLibraryFramework.framework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '17.0'
    spec.dependency 'Amplitude', '~>8.17.2'
    spec.dependency 'DatadogCrashReporting', '2.3.0'
    spec.dependency 'DatadogObjc', '2.3.0'
                
    if !Dir.exist?('build/cocoapods/framework/UAKMMiOSDemoCocoapodsLibraryFramework.framework') || Dir.empty?('build/cocoapods/framework/UAKMMiOSDemoCocoapodsLibraryFramework.framework')
        raise "

        Kotlin framework 'UAKMMiOSDemoCocoapodsLibraryFramework' doesn't exist yet, so a proper Xcode project can't be generated.
        'pod install' should be executed after running ':generateDummyFramework' Gradle task:

            ./gradlew :shared:generateDummyFramework

        Alternatively, proper pod installation is performed during Gradle sync in the IDE (if Podfile location is set)"
    end
                
    spec.xcconfig = {
        'ENABLE_USER_SCRIPT_SANDBOXING' => 'NO',
    }
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':shared',
        'PRODUCT_MODULE_NAME' => 'UAKMMiOSDemoCocoapodsLibraryFramework',
    }
                
    spec.script_phases = [
        {
            :name => 'Build UAKMMiOSDemoCocoapodsLibraryCoco',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$OVERRIDE_KOTLIN_BUILD_IDE_SUPPORTED" ]; then
                  echo "Skipping Gradle build task invocation due to OVERRIDE_KOTLIN_BUILD_IDE_SUPPORTED environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/../gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
                
end