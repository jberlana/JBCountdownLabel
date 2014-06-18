//
//  ViewController.m
//  JBCoundownLabelSampleProject
//
//  Created by Javier Berlana on 18/06/14.
//  Copyright (c) 2014 Javier Berlana. All rights reserved.
//

#import "ViewController.h"

// Views
#import "JBCountdownLabel.h"

@interface ViewController () <CountdownDelegate>

@property (strong, nonatomic) JBCountdownLabel *countdownLabel;

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    // Add countdown to the view.
    self.countdownLabel = [[JBCountdownLabel alloc] initWithFrame:CGRectMake(0, 150, 320, 46) format:@"Initiating ignition in %@" time:10 delegate:self];
    self.countdownLabel.textColor = [UIColor colorWithRed:0.48 green:0.63 blue:0.07 alpha:1];
    [self.view addSubview:self.countdownLabel];
}

- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];
    [self.countdownLabel cancelCountdown];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}

#pragma mark - Countdown delegate

- (void)countdownFinnishIn:(JBCountdownLabel *)countdown
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:NSLocalizedString(@"Ignition started",)
                                                    message:NSLocalizedString(@"The countdown has ended",)
                                                   delegate:nil
                                          cancelButtonTitle:NSLocalizedString(@"Ok",)
                                          otherButtonTitles:nil];
    [alert show];
}

#pragma mark - Actions

- (IBAction)restartCountdown:(id)sender
{
    [self.countdownLabel restartCountdown];
}

- (IBAction)cancelCountdown:(id)sender
{
    [self.countdownLabel cancelCountdown];
}


@end
