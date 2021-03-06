/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterPageContainerViewController : UIViewController <CCUIControlCenterObserver, CCUIControlCenterPageContentViewControllerDelegate, CCUIControlCenterPagePlatterViewDelegate> {
    UIViewController<CCUIControlCenterPageContentProviding> * _contentViewController;
    <CCUIControlCenterPageContainerViewControllerDelegate> * _delegate;
    NSMutableSet * _punchOutMaskCachingSuppressionReasons;
    float  _revealPercentage;
}

@property (nonatomic, readonly) UIViewController<CCUIControlCenterPageContentProviding> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CCUIControlCenterPageContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } marginInsets;
@property (nonatomic) float revealPercentage;
@property (nonatomic, readonly) BOOL shouldSuppressPunchOutMaskCaching;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_pagePlatterView;
- (id)_platterView;
- (void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (id)contentViewController;
- (void)contentViewControllerWantsDismissal:(id)arg1;
- (void)controlCenterDidDismiss;
- (void)controlCenterDidFinishTransition;
- (id)controlCenterSystemAgent;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2;
- (void)controlCenterWillPresent;
- (id)delegate;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)endSuppressingPunchOutMaskCachingForReason:(id)arg1;
- (id)initWithContentViewController:(id)arg1 delegate:(id)arg2;
- (int)layoutStyle;
- (void)loadView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })marginInsets;
- (float)revealPercentage;
- (void)setDelegate:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setRevealPercentage:(float)arg1;
- (BOOL)shouldSuppressPunchOutMaskCaching;
- (void)viewDidLoad;
- (void)visibilityPreferenceChangedForContentViewController:(id)arg1;

@end
