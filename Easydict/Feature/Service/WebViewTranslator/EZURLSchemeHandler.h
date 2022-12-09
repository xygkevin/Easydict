//
//  EZURLSchemeHandler.h
//  Easydict
//
//  Created by tisfeng on 2022/12/8.
//  Copyright © 2022 izual. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZURLSchemeHandler : NSObject <WKURLSchemeHandler>

+ (EZURLSchemeHandler *)sharedInstance;

- (void)monitorURL:(NSString *)url completionHandler:(nullable void (^)(NSURLResponse *_Nonnull response, id _Nullable responseObject, NSError *_Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END