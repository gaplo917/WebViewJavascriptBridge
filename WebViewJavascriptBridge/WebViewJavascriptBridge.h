//
//  WebViewJavascriptBridge.h
//  ExampleApp-iOS
//
//  Created by Marcus Westin on 6/14/13.
//  Copyright (c) 2013 Marcus Westin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WebViewJavascriptBridgeBase.h"

//! Project version number for WebViewJavascriptBridge.
FOUNDATION_EXPORT double WebViewJavascriptBridgeVersionNumber;

//! Project version string for WebViewJavascriptBridge.
FOUNDATION_EXPORT const unsigned char WebViewJavascriptBridgeVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WebViewJavascriptBridge/PublicHeader.h>

#import <WebKit/WebKit.h>

@interface WebViewJavascriptBridge : NSObject<WKNavigationDelegate, WebViewJavascriptBridgeBaseDelegate>

+ (instancetype)bridgeForWebView:(WKWebView*)webView;
+ (void)enableLogging;

- (void)registerHandler:(NSString*)handlerName handler:(WVJBHandler)handler;
- (void)removeHandler:(NSString*)handlerName;
- (void)callHandler:(NSString*)handlerName;
- (void)callHandler:(NSString*)handlerName data:(id)data;
- (void)callHandler:(NSString*)handlerName data:(id)data responseCallback:(WVJBResponseCallback)responseCallback;
- (void)reset;
- (void)setWebViewDelegate:(id)webViewDelegate;
- (void)disableJavscriptAlertBoxSafetyTimeout;

@end
