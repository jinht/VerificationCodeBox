//
//  JhtVerificationCodeView.h
//  JhtTools
//
//  GitHub主页: https://github.com/jinht
//  CSDN博客: http://blog.csdn.net/anticipate91
//
//  Created by Jht on 2017/7/13.
//  Copyright © 2017年 VerificationCodeView. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 展示 类型 */
typedef NS_ENUM(NSUInteger, JhtVerificationCodeViewType) {
    // normal type
    VerificationCodeViewType_Normal,
    // secret type
    VerificationCodeViewType_Secret
};


/** 验证码校验框 */
@interface JhtVerificationCodeView : UIView
/** 输入验证码满后发送的通知名 */
extern const NSString *KVCVInputFullNotificationKey;

#pragma mark - property
#pragma mark required
/** 回调 输入的验证码 */
@property (nonatomic, copy) void(^editBlcok)(NSString *text);


#pragma mark optional
/** 展示 类型
 *	default：VerificationCodeViewType_Custom
 */
@property (nonatomic, assign) JhtVerificationCodeViewType codeViewType;

/** 是否需要边框（每个格子的框）
 *	default：NO
 */
@property (nonatomic, assign) BOOL hasBoder;
/** 边框颜色（hasBoder = YES）
 *	default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *boderColor;

/** 验证码总数
 *	default：6
 */
@property (nonatomic, assign) NSInteger total;

/** 文字颜色
 *	default：[UIColor blackColor]
 */
@property (nonatomic, strong) UIColor *textColor;
/** 文字UIFont
 *	default：[UIFont boldSystemFontOfSize:17]
 */
@property (nonatomic, strong) UIFont *textFont;

/** 是否需要占位符下划线 
 *	default：NO
 */
@property (nonatomic, assign) BOOL hasUnderLine;
/** 占位符下划线颜色（hasUnderLine = YES）
 *	default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *underLineColor;

/** 未输入状态下占位符下划线是否闪烁
 *	default：NO
 */
@property (nonatomic, assign) BOOL isFlashing_NoInput;

/** 是否需要输入位数满后清空
 *	default：NO
 */
@property (nonatomic, assign) BOOL isClearWhenInputFull;



#pragma mark - Public Method
/** becomeFirstResponder */
- (void)Jht_BecomeFirstResponder;

/** resignFirstResponder */
- (void)Jht_ResignFirstResponder;

/** 改变所有已输入验证码的颜色（通常在输入验证码错误的情况下用到）
 *	color：要改变的颜色
 *	hasShakeAndClear：是否需要抖动 && 清空
 */
- (void)changeAllAlreadyInputTextColorWithColor:(UIColor *)color hasShakeAndClear:(BOOL)hasShakeAndClear;


@end
