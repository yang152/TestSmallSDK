#
# Be sure to run `pod lib lint TestSmallSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TestSmallSDK'
  s.version          = '0.2.0'
  s.summary          = 'TestSmallSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
一款集成了多个小游戏的SDK，方便用户即时happy
                       DESC

  s.homepage         = 'https://github.com/yang152/TestSmallSDK'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yang152' => '1062565969@qq.com' }
  s.source           = { :git => 'https://github.com/yang152/TestSmallSDK.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  
  s.dependency 'TaurusXAdMediation_TikTok'
  s.vendored_frameworks = 'TestSmallSDK/RSGameVlionAd.framework'
  s.resource = 'TestSmallSDK/RSGameVlionAd.bundle'


end
