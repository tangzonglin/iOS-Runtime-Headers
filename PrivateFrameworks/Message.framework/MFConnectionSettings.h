/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface MFConnectionSettings : NSObject <NSCopying> {
    NSString *_hostname;
    NSString *_serviceName;
    NSString *_certUIService;
    unsigned int _portNumber;
    struct __CFString { } *_connectionServiceType;
    BOOL _usesSSL;
    BOOL _tryDirectSSLConnection;
    BOOL _allowsTrustPrompt;
}

@property BOOL allowsTrustPrompt;
@property BOOL tryDirectSSL;
@property BOOL usesSSL;
@property unsigned int portNumber;
@property(copy) NSString * serviceName;
@property(copy) NSString * hostname;
@property(copy) NSString * certUIService;


- (BOOL)usesSSL;
- (unsigned int)portNumber;
- (void)setUsesSSL:(BOOL)arg1;
- (void)setHostname:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (id)certUIService;
- (void)setCertUIService:(id)arg1;
- (void)setTryDirectSSL:(BOOL)arg1;
- (BOOL)tryDirectSSL;
- (struct __CFString { }*)connectionServiceType;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (BOOL)allowsTrustPrompt;
- (void)setAllowsTrustPrompt:(BOOL)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setServiceName:(id)arg1;
- (id)serviceName;
- (id)hostname;

@end