/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WLCardViewDelegate <NSObject>

@optional
- (BOOL)cardViewBackGrowsCentered:(id)arg1;
- (void)cardViewDidFlip:(id)arg1;
- (BOOL)cardViewShouldFlip:(id)arg1;
- (void)cardView:(id)arg1 flipButtonPressedForCard:(id)arg2;
- (void)cardView:(id)arg1 deleteButtonPressedForCard:(id)arg2;
- (void)cardViewTapped:(id)arg1;
- (void)cardViewTouchesCancelled:(id)arg1;
- (void)cardViewTouchesBegan:(id)arg1;
@end

