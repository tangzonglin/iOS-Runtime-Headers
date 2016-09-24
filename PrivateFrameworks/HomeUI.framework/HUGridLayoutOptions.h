/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    HUGridCameraCellLayoutOptions * _cameraCellOptions;
    double  _columnSpacing;
    unsigned int  _contentColorStyle;
    UIFont * _detailStatusFont;
    BOOL  _editing;
    double  _headlineBaselineToSceneHeaderBaselineDistance;
    double  _headlineBaselineToStatusBaselineDistance;
    HUGridHeadlineCellLayoutOptions * _headlineCellOptions;
    double  _minimumMarginBelowHeadline;
    double  _minimumMarginBelowStatus;
    HUNavigationBarLayoutOptions * _navigationBarOptions;
    NSNumber * _overrideNumberOfColumns;
    NSNumber * _overrideViewSizeSubclass;
    double  _rowSpacing;
    HUGridSceneCellLayoutOptions * _sceneCellOptions;
    int  _scrollDirection;
    double  _sectionBottomToNextSectionHeaderBaselineMargin;
    UIFont * _sectionHeaderFont;
    double  _sectionLeadingMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionTitleMargin;
    double  _sectionTopMargin;
    double  _sectionTrailingMargin;
    HUGridServiceCellLayoutOptions * _serviceCellOptions;
    double  _statusDetailsButtonTopMargin;
    UIFont * _statusFont;
    BOOL  _statusHidden;
    double  _statusLineHeight;
    double  _topOfScreenToSceneHeaderBaselinePercentage;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, readonly) double cameraCellHeight;
@property (nonatomic, copy) HUGridCameraCellLayoutOptions *cameraCellOptions;
@property (nonatomic, readonly) double cameraCellWidth;
@property (nonatomic, readonly) int cellSizeSubclass;
@property (nonatomic) double columnSpacing;
@property (nonatomic) unsigned int contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *detailStatusFont;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;
@property (nonatomic) double headlineBaselineToStatusBaselineDistance;
@property (nonatomic, readonly) double headlineCellHeight;
@property (nonatomic, copy) HUGridHeadlineCellLayoutOptions *headlineCellOptions;
@property (nonatomic) double minimumMarginBelowHeadline;
@property (nonatomic) double minimumMarginBelowStatus;
@property (nonatomic, copy) HUNavigationBarLayoutOptions *navigationBarOptions;
@property (nonatomic, readonly) int numberOfColumns;
@property (nonatomic, retain) NSNumber *overrideNumberOfColumns;
@property (nonatomic, retain) NSNumber *overrideViewSizeSubclass;
@property (nonatomic, readonly) double pointWidthForFullWidthCell;
@property (nonatomic) double rowSpacing;
@property (nonatomic, copy) HUGridSceneCellLayoutOptions *sceneCellOptions;
@property (nonatomic) int scrollDirection;
@property (nonatomic, readonly) double sectionBottomMargin;
@property (nonatomic) double sectionBottomToNextSectionHeaderBaselineMargin;
@property (nonatomic, readonly) double sectionHeaderCellHeight;
@property (nonatomic, retain) UIFont *sectionHeaderFont;
@property (nonatomic) double sectionLeadingMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionTitleMargin;
@property (nonatomic) double sectionTopMargin;
@property (nonatomic) double sectionTrailingMargin;
@property (nonatomic, copy) HUGridServiceCellLayoutOptions *serviceCellOptions;
@property (nonatomic) double statusDetailsButtonTopMargin;
@property (nonatomic, retain) UIFont *statusFont;
@property (nonatomic) BOOL statusHidden;
@property (nonatomic) double statusLineHeight;
@property (nonatomic, readonly) double statusListCellHeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topOfScreenToSceneHeaderBaselineDistance;
@property (nonatomic) double topOfScreenToSceneHeaderBaselinePercentage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic, readonly) int viewSizeSubclass;

+ (id)_defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 overrideSizeSubclass:(id)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 overrideSizeSubclass:(int)arg2;

- (void).cxx_destruct;
- (id)_childDisplayOptions;
- (float)cameraCellHeight;
- (id)cameraCellOptions;
- (float)cameraCellWidth;
- (int)cellSizeSubclass;
- (float)columnSpacing;
- (unsigned int)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailStatusFont;
- (float)headlineBaselineToSceneHeaderBaselineDistance;
- (float)headlineBaselineToStatusBaselineDistance;
- (float)headlineCellHeight;
- (id)headlineCellOptions;
- (id)initWithViewSize:(struct CGSize { double x1; double x2; })arg1 overrideSizeSubclass:(id)arg2;
- (BOOL)isEditing;
- (float)minimumMarginBelowHeadline;
- (float)minimumMarginBelowStatus;
- (id)navigationBarOptions;
- (int)numberOfCameraCellsPerRow;
- (int)numberOfColumns;
- (id)overrideNumberOfColumns;
- (id)overrideViewSizeSubclass;
- (float)pointWidthForCameraCell;
- (float)pointWidthForFullWidthCell;
- (float)pointWidthForNumberOfColumns:(int)arg1;
- (float)rowSpacing;
- (id)sceneCellOptions;
- (int)scrollDirection;
- (float)sectionBottomMargin;
- (float)sectionBottomToNextSectionHeaderBaselineMargin;
- (float)sectionHeaderCellHeight;
- (id)sectionHeaderFont;
- (float)sectionLeadingMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionTitleMargin;
- (float)sectionTopMargin;
- (float)sectionTrailingMargin;
- (id)serviceCellOptions;
- (void)setCameraCellOptions:(id)arg1;
- (void)setColumnSpacing:(float)arg1;
- (void)setContentColorStyle:(unsigned int)arg1;
- (void)setDetailStatusFont:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setHeadlineBaselineToSceneHeaderBaselineDistance:(float)arg1;
- (void)setHeadlineBaselineToStatusBaselineDistance:(float)arg1;
- (void)setHeadlineCellOptions:(id)arg1;
- (void)setMinimumMarginBelowHeadline:(float)arg1;
- (void)setMinimumMarginBelowStatus:(float)arg1;
- (void)setNavigationBarOptions:(id)arg1;
- (void)setOverrideNumberOfColumns:(id)arg1;
- (void)setOverrideViewSizeSubclass:(id)arg1;
- (void)setRowSpacing:(float)arg1;
- (void)setSceneCellOptions:(id)arg1;
- (void)setScrollDirection:(int)arg1;
- (void)setSectionBottomToNextSectionHeaderBaselineMargin:(float)arg1;
- (void)setSectionHeaderFont:(id)arg1;
- (void)setSectionLeadingMargin:(float)arg1;
- (void)setSectionTitleMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionTopMargin:(float)arg1;
- (void)setSectionTrailingMargin:(float)arg1;
- (void)setServiceCellOptions:(id)arg1;
- (void)setStatusDetailsButtonTopMargin:(float)arg1;
- (void)setStatusFont:(id)arg1;
- (void)setStatusHidden:(BOOL)arg1;
- (void)setStatusLineHeight:(float)arg1;
- (void)setTopOfScreenToSceneHeaderBaselinePercentage:(float)arg1;
- (float)statusDetailsButtonTopMargin;
- (id)statusFont;
- (BOOL)statusHidden;
- (float)statusLineHeight;
- (float)statusListCellHeight;
- (float)topOfScreenToSceneHeaderBaselineDistance;
- (float)topOfScreenToSceneHeaderBaselinePercentage;
- (struct CGSize { double x1; double x2; })viewSize;
- (int)viewSizeSubclass;

@end