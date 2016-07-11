//
//  ViewController.h
//  WeexGame
//
//  Created by 天行远景 on 16/7/11.
//  Copyright © 2016年 天行远景. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SRWebSocket.h>
@interface ViewController : UIViewController<SRWebSocketDelegate>
@property (nonatomic, strong) NSString *script;
@property (nonatomic, strong) NSURL *url;

@property (nonatomic, strong) SRWebSocket *hotReloadSocket;
@property (nonatomic, strong) NSString *source;


@end

