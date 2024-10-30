Pod::Spec.new do |spec|
  spec.name               = "SSAITracking"
  spec.version            = "1.0.33"
  spec.summary            = "SimgaSSAI Library for iOS apps"
  spec.description        = "TDM SimgaSSAI Library for iOS apps"
  spec.homepage           = "https://github.com/sigmaott/sigma-ssai-ios"
  spec.documentation_url  = "https://github.com/sigmaott/sigma-ssai-ios"
  spec.license            = { :type => "MIT", :file => 'LICENSE'}
  spec.author             = { "TDM" => "multimediathudojsc@gmail.com" }
  spec.source             = { :git => 'https://github.com/sigmaott/sigma-ssai-ios.git', :tag => "#{spec.version}" }
  spec.swift_version      = "5.3"
  s.source_files = 'SSAITracking/**/*.{h,m}'
  s.public_header_files = 'SSAITracking/**/*.h'
  s.module_map = 'SSAITracking/**/*.modulemap'

  # Supported deployment targets
  spec.ios.deployment_target  = "12.4"

  # Published binaries
  spec.vendored_frameworks = "libs/ProgrammaticAccessLibrary.xcframework","libs/SSAITracking.xcframework"
  spec.vendored_libraries = "libs/libssai_ios.a", "libs/libssai-sdk.a"
end