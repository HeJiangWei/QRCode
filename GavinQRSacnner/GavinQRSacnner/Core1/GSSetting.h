//
//  GSSetting.h
//  GavinQRSacnner
//
//  Created by wei on 2018/7/10.
//  Copyright © 2018年 Gavin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GSSetting : NSObject

@property (nonatomic,assign) BOOL openURLByChromeAtFirst;


+ (instancetype)setting;

@end
