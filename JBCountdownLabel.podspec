Pod::Spec.new do |s|

  s.name         = "JBCountdownLabel"
  s.version      = "1.0"
  s.summary      = "A UILabel subclass that displays a countdown"
  s.platform     = :ios
  s.ios.deployment_target = "6.0"

  s.description  = <<-DESC
                   JBCountdownLabel is UILabel subclass that displays a countdown with a defined amount of seconds. So you can customise the label just like a native `UILabel` and add some cool actions
                   DESC

  s.homepage     = "https://github.com/jberlana/JBCoundownLabel"
  s.screenshots  = "https://raw.githubusercontent.com/jberlana/JBCoundownLabel/master/demo.gif"
  s.license      = "MIT"
  s.author             = { "Javier Berlana" => "jberlana@gmail.com" }
  s.social_media_url   = "http://twitter.com/jberlana"
  s.source             = { :git => "https://github.com/jberlana/JBCoundownLabel.git", :tag => "1.0" }

  s.source_files  = "JBCountdownLabelSampleProject/JBCountdownLabel.h", "JBCountdownLabelSampleProject/JBCountdownLabel.m"

  s.requires_arc = true

end
