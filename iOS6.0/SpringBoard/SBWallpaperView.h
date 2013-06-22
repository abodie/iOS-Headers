/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@interface SBWallpaperView : UIImageView
{
    int _orientation;
    int _variant;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    BOOL _usesFilter;
    float _gradientAlpha;
    struct CGRect _wallpaperContentsRect;
}

@property(nonatomic) BOOL usesFilter; // @synthesize usesFilter=_usesFilter;
@property(nonatomic) float gradientAlpha; // @synthesize gradientAlpha=_gradientAlpha;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)resetCurrentImageToWallpaper;
- (void)replaceWallpaperWithImage:(id)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setAlpha:(float)arg1;
- (float)alpha;
@property(nonatomic) float filterAlpha;
- (void)setOrientation:(int)arg1 duration:(double)arg2;
- (void)_setOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_setGradientImagesWithOrientation:(int)arg1;
- (BOOL)_shouldShowGradientOverWallpaper;
- (void)_wallpaperChanged;
- (void)_resetImage;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithOrientation:(int)arg1 variant:(int)arg2;

@end
