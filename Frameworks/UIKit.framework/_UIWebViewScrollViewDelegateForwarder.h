/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIScrollViewDelegate>, UIWebView;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    <UIScrollViewDelegate> *_delegate;
    UIWebView *_webView;
}

@property <UIScrollViewDelegate> * delegate;
@property UIWebView * webView;


- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setWebView:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)webView;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end