## JhtVerificationCodeBox


### 先上图，看一下是否符合你的场景吧！
<img src="https://raw.githubusercontent.com/jinht/VerificationCodeBox/master/ReadMEImages/Gif/VerificationCodeView.gif" width=240 height=426 />


### Function Description
1. 密文 || 明文输入
2. 变色 || 抖动清空
3. 呼吸闪烁占位符下划线
     
     
### how to use
#### 1. 简单的初始化：快速集成做这些就够了
```oc
JhtVerificationCodeView *verificationCodeView = [[JhtVerificationCodeView alloc] initWithFrame:CGRectMake(40, 20 + 40 + 100 * i, CGRectGetWidth(self.view.frame) - 80, 60)];
verificationCodeView.endEditBlcok = ^(NSString *text) {
     NSLog(@"输入的验证码为：%@", text);
};
```

#### 2. 选配项 ：根据需求做相关property的配置
```oc
#pragma mark optional
/** 展示 类型
 *  default：VerificationCodeViewType_Custom
 */
@property (nonatomic, assign) JhtVerificationCodeViewType codeViewType;

/** 是否需要边框（每个格子的框）
 *  default：NO
 */
@property (nonatomic, assign) BOOL hasBoder;
/** 边框颜色（hasBoder = YES）
 *  default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *boderColor;

/** 验证码总数
 *  default：6
 */
@property (nonatomic, assign) NSInteger total;

/** 文字颜色
 *  default：[UIColor blackColor]
 */
@property (nonatomic, strong) UIColor *textColor;
/** 文字UIFont
 *  default：[UIFont boldSystemFontOfSize:17]
 */
@property (nonatomic, strong) UIFont *textFont;

/** 是否需要占位符下划线 
 *  default：NO
 */
@property (nonatomic, assign) BOOL hasUnderLine;
/** 占位符下划线颜色（hasUnderLine = YES）
 *  default：[UIColor grayColor]
 */
@property (nonatomic, strong) UIColor *underLineColor;

/** 未输入状态下占位符下划线是否闪烁
 *  default：NO
 */
@property (nonatomic, assign) BOOL isFlashing_NoInput;

/** 是否需要输入位数满后清空
 *  default：NO
 */
@property (nonatomic, assign) BOOL isClearWhenInputFull;
```

#### 3. 常用方法说明
```oc
/** 改变所有已输入验证码的颜色（通常在输入验证码错误的情况下用到）
 *  scenes：验证码输入有误变色
 *  hasShakeAndClear：是否需要抖动 && 清空
 */
- (void)changeAllAlreadyInputTextColorWithColor:(UIColor *)color hasShakeAndClear:(BOOL)hasShakeAndClear;

// 变色 && 震动 && 清空
[verificationCodeView changeAllAlreadyInputTextColorWithColor:col hasShakeAndClear:YES];
```

* 具体使用详见demo


### Remind
* ARC
* iOS >= 8.0
* iPhone \ iPad 


## Hope
* If you find bug when used，Hope you can Issues me，Thank you or try to download the latest code of this framework to see the BUG has been fixed or not
* If you find the function is not enough when used，Hope you can Issues me，I very much to add more useful function to this framework ，Thank you !
