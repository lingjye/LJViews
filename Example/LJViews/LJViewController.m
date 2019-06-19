//
//  LJViewController.m
//  LJViews
//
//  Created by lingjye on 06/19/2019.
//  Copyright (c) 2019 lingjye. All rights reserved.
//

#import "LJViewController.h"
#import "LJViews.h"

@interface LJViewController ()

@end

@implementation LJViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    UIButton *button = [UIButton creatButton:^(UIButton *button) {
        button.ljTitle_font_titleColor_state(@"click", [UIFont systemFontOfSize:20], UIColor.redColor, UIControlStateNormal);
        button.ljFrame(50, 100, 100, 50);
    }];
    UILabel *label = [UILabel creatLabel:^(UILabel *label) {
        label.ljTitle_font_textColor(@"label", [UIFont systemFontOfSize:20], UIColor.redColor);
        label.ljAligment(NSTextAlignmentCenter);
        label.ljFrame(50, 200, 100, 50);
    }];
    [self.view addSubview:button];
    [self.view addSubview:label];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
