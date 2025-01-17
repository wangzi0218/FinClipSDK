Pod::Spec.new do |s|
  s.name         = "FinApplet"
  s.version      = "__finapplet_version__"
  s.summary      = "凡泰小程序SDK."
  s.description  = <<-DESC
                    this is common
                   DESC
  s.homepage     = "https://www.finclip.com"
  s.license      = {
    :type => 'Copyright',
    :text => <<-LICENSE
      Copyright 2017 finogeeks.com. All rights reserved.
      LICENSE
  }
  s.author             = { "developer" => "developer@finogeeks.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "9.0"
  s.source       = { :git => 'https://github.com/finogeeks/FinClipSDK.git', :tag =>"#{s.version}" }
  s.vendored_frameworks = "FinApplet.framework" 
  s.libraries = 'c++'
  s.requires_arc = true
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
