/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationRenderer.h>

@class CALayer, KNAnimatedBuild, KNAnimationInfo, KNBuild, NSArray, NSDictionary, NSMutableArray, TSDDrawableInfo, TSDFPSCounter, TSDRep, TSDTextureContext, TSDTextureSet;

// Not exported
@interface KNBuildRenderer : KNAnimationRenderer
{
    long long mNumberOfAnimationsStarted;
    NSDictionary *mAnimatedLayers;
    CALayer *mParentLayer;
    id mBuildEndCallbackTarget;
    SEL mBuildEndCallbackSelector;
    NSMutableArray *mAnimatedBuildsToStartAtEnd;
    TSDTextureSet *mTextureSet;
    TSDTextureSet *mFinalAttributesTextureSet;
    KNAnimationInfo *mAnimationInfo;
    KNAnimatedBuild *mAnimatedBuild;
    KNBuild *mBuildDescription;
    long long mStageIndex;
    TSDDrawableInfo *mInfo;
    NSDictionary *mPreviousAttributes;
    NSDictionary *mFinalAttributes;
    _Bool mIsPreview;
    _Bool mInterrupted;
    _Bool mIsAnimationForPlayback;
    _Bool mAreAnimationsPrepared;
    _Bool mUsingFinalTexture;
    _Bool mIsTextureCachedAtEndOfBuild;
    TSDFPSCounter *mFPSCounter;
    TSDTextureContext *mTextureContext;
}

@property(retain, nonatomic) TSDTextureContext *textureContext; // @synthesize textureContext=mTextureContext;
@property(nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=mAnimatedBuild;
@property(retain, nonatomic) NSDictionary *finalAttributes; // @synthesize finalAttributes=mFinalAttributes;
@property(retain, nonatomic) NSDictionary *previousAttributes; // @synthesize previousAttributes=mPreviousAttributes;
@property(readonly, nonatomic) NSArray *animatedBuildsToStartAtEnd; // @synthesize animatedBuildsToStartAtEnd=mAnimatedBuildsToStartAtEnd;
@property(retain, nonatomic) CALayer *parentLayer; // @synthesize parentLayer=mParentLayer;
@property(readonly, nonatomic) TSDDrawableInfo *info; // @synthesize info=mInfo;
@property(readonly, nonatomic) KNBuild *buildDescription; // @synthesize buildDescription=mBuildDescription;
- (_Bool)p_isPDFOutput;
- (void)p_resetAnimations;
- (void)p_removeAnimations;
- (void)resetPreviousStageUnhighlightOnTextureSet:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)p_keyForAnimation;
- (id)setupFinalTexture;
- (void)setVisibilityAndGeometryOn:(id)arg1 withFinalTextureSet:(id)arg2;
- (_Bool)p_isDriftAnimation;
- (void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2;
- (void)addBuildToStartAtEnd:(id)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
@property(readonly, nonatomic) unsigned long long stageIndex;
@property(readonly, nonatomic) unsigned long long textureDeliveryStyle;
- (void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(_Bool)arg1;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (_Bool)addAnimationsAtLayerTime:(double)arg1;
- (void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1;
- (void)prepareAnimations;
- (id)initializeTextureSetForEndOfBuild:(_Bool)arg1;
- (void)animateAfterDelay:(double)arg1;
- (void)p_setLayerVisibility:(id)arg1 isAtEndOfBuild:(_Bool)arg2;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;
@property(readonly, nonatomic) _Bool isTextDrawable;
- (id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(_Bool)arg3 shouldForceRebuild:(_Bool)arg4;
- (id)textureSetForStage:(long long)arg1 context:(id)arg2;
@property(readonly, nonatomic) TSDTextureSet *nonCachedTextureSet;
@property(readonly, nonatomic) TSDTextureSet *textureSet;
- (id)p_filterForTextDelivery:(long long)arg1;
@property(readonly, nonatomic) TSDRep *rep;
- (void)setupPluginContext;
- (id)loadPluginIfNeeded;
- (id)description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 build:(id)arg2 stageIndex:(long long)arg3 session:(id)arg4 model:(id)arg5 animatedSlideView:(id)arg6;

@end

