/* Generated by RuntimeBrowser.
 */

@protocol PKPassGroupViewDelegate <NSObject>

@optional

- (BOOL)groupView:(PKPassGroupView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didBeginShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didEndShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didUpdatePassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 panned:(struct CGPoint { float x1; float x2; })arg2 withVelocity:(struct CGPoint { float x1; float x2; })arg3;
- (int)groupViewContentModeForFrontmostPassWhenStacked:(PKPassGroupView *)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(PKPassGroupView *)arg1;
- (void)groupViewFrontPassDidFlip:(PKPassGroupView *)arg1 animated:(BOOL)arg2;
- (void)groupViewPanDidBegin:(PKPassGroupView *)arg1;
- (void)groupViewPanDidEnd:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(PKPassGroupView *)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(PKPassGroupView *)arg1;
- (unsigned int)groupViewPassesSuppressedContent:(PKPassGroupView *)arg1;
- (PKReusablePassViewQueue *)groupViewReusablePassViewQueue:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPanning:(PKPassGroupView *)arg1;
- (BOOL)groupViewShouldAllowPassFlip:(PKPassGroupView *)arg1;
- (void)groupViewTapped:(PKPassGroupView *)arg1;

@end