/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextMagnifierTimeWeightedPoint, UIView<UITextSelectingContainer>, UITextSelection;

@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _animationPoint;
    NSInteger _autoscrollDirections;
    UIView *_autoscrollRenderer;
    } _magnificationPoint;
    float _magnifierOffsetFromTouch;
    UIView *_magnifierRenderer;
    UITextSelection *_selection;
    UIView<UITextSelectingContainer> *_target;
    float _touchOffsetFromMagnificationPoint;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
}

@property(retain) UITextSelection *selection;
@property(retain) UIView<UITextSelectingContainer> *target;
@property CGPoint animationPoint;
@property CGPoint magnificationPoint;
@property(readonly) CGPoint terminalPoint;
@property(readonly) BOOL terminalPointPlacedCarefully;

+ (id)sharedRangedMagnifier;

- (void)animateToAutoscrollRenderer;
- (void)animateToMagnifierRenderer;
- (struct CGPoint { float x1; float x2; })animationPoint;
- (void)autoscrollWillNotStart;
- (void)beginMagnifyingSelection:(id)arg1 magnificationPoint:(struct CGPoint { float x1; float x2; })arg2 offset:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4;
- (void)dealloc;
- (void)detectLostTouches:(id)arg1;
- (NSInteger)horizontalMovement;
- (NSInteger)horizontalMovementAtTime:(double)arg1;
- (id)initWithDefaultFrame;
- (struct CGPoint { float x1; float x2; })magnificationPoint;
- (float)offsetFromMagnificationPoint;
- (void)postAutoscrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)remove;
- (id)selection;
- (void)setAnimationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAutoscrollDirections:(NSInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMagnificationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setNeedsDisplay;
- (void)setSelection:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setToMagnifierRenderer;
- (struct CGPoint { float x1; float x2; })snappedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopMagnifying:(BOOL)arg1;
- (id)target;
- (struct CGPoint { float x1; float x2; })terminalPoint;
- (BOOL)terminalPointPlacedCarefully;
- (void)updateFrame;
- (BOOL)wasPlacedCarefullyAtTime:(double)arg1;
- (void)windowWillRotate:(id)arg1;
- (void)zoomDownAnimation;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;

@end