//
//  KlassB.h
//  protocolTest
//
//  Created by Max Friman on 2019-02-15.
//  Copyright © 2019 Max Friman. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LoggaHejDelegate <NSObject>

-(void)loggaHej;

@end

@interface KlassB : NSObject

@property (assign) id<LoggaHejDelegate>delegate;
-(void)knappTryck;

@end

NS_ASSUME_NONNULL_END


