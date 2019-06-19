//
//  UIButton.h
//  LJView
//
//  Created by txooo on 17/2/24.
//  Copyright © 2017年 领琾. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton(UIButton)

+ (instancetype)creatButton:(void(^)(UIButton *button))block;
/*
 * Button的frame
 */
//@property (nonatomic, copy) UIButton* (^ljFrame)(float left,float top,float width,float height);
- (UIButton* (^)(float left,float top,float width,float height))ljFrame;
/*
 * imageView的frame
 */
- (UIButton* (^)(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right))ljImageInsets;
/*
 * title的frame”
 */
- (UIButton* (^)(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right))ljTitleInsets;

/**
 * contentInsets
 */
- (UIButton* (^)(CGFloat top, CGFloat left, CGFloat bottom, CGFloat right))ljContentInsets;

/*
 * imageView的参数值
 */
- (UIButton* (^)(UIImage *image, UIViewContentMode mode))ljImage_contentMode;
- (UIButton* (^)(UIImage *image, UIControlState state))ljImage_state;
/*
 * Title的参数值
 */
- (UIButton* (^)(NSString *title, UIFont *font, UIColor *textColor, UIControlState controlState))ljTitle_font_titleColor_state;
- (UIButton* (^)(NSString *title, UIControlState controlState))ljTitle_state;
- (UIButton* (^)(UIColor *textColor, UIControlState controlState))ljTitleColor_state;
- (UIButton *(^)(NSAttributedString *title, UIControlState controlState))ljAttributedTitle_state;
- (UIButton *(^)(UIControlContentHorizontalAlignment alignment))ljHorizontalAlignment;
- (UIButton *(^)(UIControlContentVerticalAlignment alignment))ljVerticalAlignment;
/*
 * 背景图片
 */
- (UIButton* (^)(UIImage *image, UIControlState controlState))ljBackgroundImage_state;
/*
 * 背景颜色
 */
- (UIButton* (^)(UIColor *color))ljBackgroundColor;
/*
 * 点击事件类型
 */
- (UIButton* (^)(id target, SEL selector, UIControlEvents event))ljTarget_action_events;
/*
 * 圆角
 */
- (UIButton* (^)(CGFloat radius, CGFloat width ,UIColor *color))ljCornerRadius_borderWidth_borderColor;
/*
 * 是否选中
 */
- (UIButton* (^)(BOOL select))ljSelect;

/**
 * 是否可点击
 */
- (UIButton* (^)(BOOL enable))enable;

@end
