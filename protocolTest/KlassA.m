//
//  ViewController.m
//  protocolTest
//
//  Created by Max Friman on 2019-02-15.
//  Copyright © 2019 Max Friman. All rights reserved.
//

#import "KlassA.h"


@implementation KlassA


- (void)loggaHej {
    NSLog(@"yoo");
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (IBAction)loggaHejKlassA:(id)sender {
    _klassb = [KlassB new];
    _klassb.delegate = self;  // här tilldelas klassB delegat till KlassA?
    [_klassb knappTryck];   //I metoden knappTryck anropar klassB metoderna i protokollet som KlassA implementerar
}


@end
