//
//  JBCountdownLabel.h
//  Meets
//
//  Created by Javier Berlana on 18/06/14.
//  Copyright (c) 2014 Meetsapp. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@class JBCountdownLabel;

/**
 The `CountdownDelegate` protocol is adopted by a viewcontroller that ads a countdown label as a subview in order to get notified when the countdown ended.
 */
@protocol CountdownDelegate <NSObject>

@optional
/**
 Get called when the countdown ends.
 @param countdown The countdown that has ended.
 @since 0.0.1
 */
- (void)countdownFinnishIn:(JBCountdownLabel *)countdown;

@end


/**
 `JBCountdownLabel` is a subclass of `UILabel` that displays a countdown with a defined amount of seconds.
 */

@interface JBCountdownLabel : UILabel

/**
 Initializes and returns a newly allocated UILabel object with a countdown configured with the specified number of seconds.
 @param frame    The fram of the UILabel.
 @param string   The format string text of the UILabel, `%@` to define where to place the countdown.
 @param seconds  The number of seconds of the countdown.
 @param delegate The delegate that will receive callbacks when the countdown ends.
 @since 0.0.1
 */
- (instancetype)initWithFrame:(CGRect)frame format:(NSString *)string time:(int)seconds delegate:(id <CountdownDelegate>)delegate;

///----------------------------------
/// @name Manage countdown
///----------------------------------

/**
 Restart the countdown setting the countdown to the initial amount of seconds.
 @since 0.0.1
 */
- (void)restartCountdown;

/**
 Cancel the countdown setting the countdown to 0.
 @since 0.0.1
 */
- (void)cancelCountdown;

/**
 Set a new amount of seconds to the current countdown and restarts it.
 @param seconds The new amount of seconds to define on the countdown.
 @since 0.0.1
 */
- (void)setTime:(int)seconds;

@end
