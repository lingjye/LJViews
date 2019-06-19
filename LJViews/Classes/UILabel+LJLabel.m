//
//  UILabel.m
//  LJView
//
//  Created by txooo on 17/2/24.
//  Copyright © 2017年 领琾. All rights reserved.
//

#import "UILabel+LJLabel.h"

@implementation UILabel(LJLabel)

+ (instancetype)creatLabel:(void (^)(UILabel *))block{
    UILabel *label = [[self class] new];
    block(label);
    return label;
}

- (UILabel *(^)(float, float, float, float))ljFrame{
    return ^UILabel *(float left,float top,float width,float height){
        self.frame = CGRectMake(left, top, width, height);
        return self;
    };
}

- (UILabel *(^)(NSString *, UIFont *, UIColor *))ljTitle_font_textColor{
    return ^UILabel *(NSString *text, UIFont *font, UIColor *textColor){
        self.text = text;
        self.font = font;
        self.textColor = textColor;
        return self;
    };
}

- (UILabel *(^)(NSTextAlignment))ljAligment{
    return ^UILabel *(NSTextAlignment aligment){
        self.textAlignment = aligment;
        return self;
    };
}

- (UILabel *(^)(UIColor *))ljBackgroundColor{
    return ^UILabel *(UIColor *color){
        self.backgroundColor = color;
        return self;
    };
}

- (UILabel *(^)(NSInteger))ljNumberOfLines{
    return ^UILabel *(NSInteger lines){
        self.numberOfLines = lines;
        return self;
    };
}

@end
