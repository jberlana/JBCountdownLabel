# JBCountdownLabel

**A `UILabel` subclass that displays a countdown**

![image](<https://github.com/jberlana/JBCountdownLabel/raw/master/demo.gif>)

`JBCountdownLabel` is `UILabel` subclass that displays a countdown with a defined amount of seconds. So you can customise the label just like a native `UILabel` and add some cool actions:

- Customise the number of seconds on the countdown.
- You can show just the countdown or the countdown inside a sentence, you chose.
- Restart the countdown.
- Cancel the countdown.
- Change the amount of time on the countdown.

## Installation

I recommend use [CocoaPods](http://cocoapods.org) to install JBCountdownLabel. Simply add the following line to your `Podfile`:

#### Podfile

```ruby
pod 'JBCountdownLabel'
```

But you can also just drop `JBCountdownLabel.m` and `JBCountdownLabel.h` in your project.

## Usage

Add the label to your view:

``` objective-c
self.countdownLabel = [[JBCountdownLabel alloc] initWithFrame:CGRectMake(0, 50, 320, 46) format:@"Initiating ignition in %@" time:300 delegate:self];
self.countdownLabel.textColor = [UIColor colorWithRed:0.48 green:0.63 blue:0.07 alpha:1];
[self.view addSubview:self.countdownLabel];
```

You can change the countdown behaviour:

``` objective-c
- (void)restartCountdown;
- (void)cancelCountdown;
- (void)setTime:(int)seconds;
```

There is an optional `delegate` callback to get notified when the countdown ended:

``` objective-c
- (void)countdownFinnishInCountdown:(JBCountdownLabel *)countdown;
```

## Demo

Build and run the `JBCoundownLabelSampleProject` project in Xcode to see `JBCountdownLabel` in action.

This code has been created originally to provide a countdown on the activation screen of  [meets](http://www.meetsapp.com/ "meets") [Download the app](https://itunes.apple.com/us/app/meets-tienes-un-plan/id595441007 "meets") and test it for free! Feedback is welcome!


## Communication

- If you **found a bug**, open an issue.
- If you **have a feature request**, open an issue.
- If you **want to contribute**, submit a pull request.

## Contact

Javier Berlana

- http://github.com/jberlana
- http://twitter.com/jberlana
- jberlana@gmail.com

## License

JBCountdownLabel is available under the MIT license. See the LICENSE file for more info.

--
###[meets](http://www.meetsapp.com/ "meets"), create and discover plans with your friends.###