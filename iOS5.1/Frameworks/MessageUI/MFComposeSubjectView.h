/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeHeaderView.h>

#import "UITextFieldDelegate-Protocol.h"

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate>
{
    UITextField *_textField;
    unsigned int _delegateRespondsToTextChange:1;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)textChanged:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)endEditing:(BOOL)arg1;
- (void)dealloc;
- (BOOL)_canBecomeFirstResponder;

@end

