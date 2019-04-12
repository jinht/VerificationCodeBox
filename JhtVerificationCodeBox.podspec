Pod::Spec.new do |s|
    
    s.name                       = 'JhtVerificationCodeBox'
    s.version                    = '1.0.2'
    s.summary                    = '验证码 && 密码 校验View'
    s.homepage                   = 'https://github.com/jinht/VerificationCodeBox'
    s.license                    = { :type => 'MIT', :file => 'LICENSE' }
    s.author                     = { 'Jinht' => 'jinjob@icloud.com' }
    s.social_media_url           = 'https://blog.csdn.net/Anticipate91'
    s.platform                   = :ios
    s.ios.deployment_target      = '8.0'
    s.source                     = { :git => 'https://github.com/jinht/VerificationCodeBox.git', :tag => s.version }
    s.ios.vendored_frameworks    = 'JhtVerificationCodeBox_SDK/JhtVerificationCodeView.framework'
    s.frameworks                 = 'UIKit'

end
