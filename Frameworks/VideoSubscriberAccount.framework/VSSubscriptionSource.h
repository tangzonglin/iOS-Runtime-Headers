/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    int  _kind;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int kind;

+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)kind;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(int)arg1;

@end
