/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MLPhoto, NSString, PLImageView, PLVideoView, UIImageView;

@interface PLExpandableImageView : PLExpandableView <PLStackableImage> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int isRotating : 1; 
        unsigned int didTrack : 1; 
        unsigned int updateFrame : 1; 
        unsigned int didLayout : 1; 
        unsigned int alwaysDoLayout : 1; 
        unsigned int didComputeCenterOffset : 1; 
        unsigned int imageIsFullScreen : 1; 
    } _anchorPoint;
    } _centerOffset;
    } _contractedFrame;
    float _currentAngle;
    } _exImageFlags;
    int _imageID;
    float _imageRotationAngle;
    PLImageView *_imageView;
    } _initialExpandingFrame;
    float _originalAngle;
    } _originalBounds;
    } _originalSize;
    float _originalWidth;
    MLPhoto *_photo;
    float _pinchAngle;
    float _pinchScale;
    float _pinchWidth;
}

@property(getter=borderIsVisible) BOOL borderVisible;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } contractedFrame;
@property(readonly) struct CGSize { float width; float height; } imageSize;
@property(readonly) UIImageView * imageView;
@property(readonly) BOOL isBeingManipulated;
@property(copy) NSString * name;
@property(retain) MLPhoto * photo;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property float transitionProgress;
@property(retain) PLVideoView * videoView;

+ (void)_initializeSafeCategory;
+ (float)imageBorderWidth;

- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_contentView;
- (float)_currentScale;
- (float)_expandedScale;
- (float)_expansionFraction;
- (float)_expansionFractionForBorderAlpha:(BOOL)arg1;
- (void)_finishedState;
- (struct CGSize { float x1; float x2; })_newSizeFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snappedExpandedFrame;
- (void)_updateBorderAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { float x1; float x2; })arg1 rightPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)beginTrackingPinch:(id)arg1;
- (BOOL)borderIsVisible;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contractedFrame;
- (void)dealloc;
- (id)image;
- (float)imageRotationAngle;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 withBorder:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isBeingManipulated;
- (BOOL)isShadowEnabled;
- (void)layoutSubviews;
- (id)name;
- (id)photo;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setBorderVisible:(BOOL)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContractedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 isFullscreen:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 angle:(float)arg2;
- (void)setTextBadgeString:(id)arg1;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransitionProgress:(float)arg1;
- (void)setVideoView:(id)arg1;
- (float)transitionProgress;
- (id)videoView;
- (void)willMoveToSuperview:(id)arg1;

@end