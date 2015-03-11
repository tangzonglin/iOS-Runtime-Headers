/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, TIKeyboardOutput;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {
    TIKeyboardOutput *_keyboardOutput;
    int _positionOffset;
    NSString *_primaryLanguage;
    BOOL _shouldAdvanceInputMode;
    BOOL _shouldDismiss;
}

@property(retain) TIKeyboardOutput * keyboardOutput;
@property int positionOffset;
@property(copy) NSString * primaryLanguage;
@property BOOL shouldAdvanceInputMode;
@property BOOL shouldDismiss;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createKeyboardOutputIfNecessary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)keyboardOutput;
- (int)positionOffset;
- (id)primaryLanguage;
- (void)setKeyboardOutput:(id)arg1;
- (void)setPositionOffset:(int)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setShouldAdvanceInputMode:(BOOL)arg1;
- (void)setShouldDismiss:(BOOL)arg1;
- (BOOL)shouldAdvanceInputMode;
- (BOOL)shouldDismiss;

@end