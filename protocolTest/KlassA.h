//
//  ViewController.h
//  protocolTest
//
//  Created by Max Friman on 2019-02-15.
//  Copyright © 2019 Max Friman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KlassB.h"


@interface KlassA : UIViewController <LoggaHejDelegate>

@property (strong) KlassB *klassb;
- (IBAction)loggaHejKlassA:(id)sender;


@end
