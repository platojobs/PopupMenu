//
//  PopupMenu.h
//  PopupMenuProj
//
//  Created by mac on 2017/12/18.
//  Copyright © 2017年 ChengMengKeJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PopupMenuItem : NSObject

@property (readwrite, nonatomic, strong) UIImage *image;
@property (readwrite, nonatomic, strong) NSString *title;
@property (readwrite, nonatomic, weak) id target;
@property (readwrite, nonatomic) SEL action;
@property (readwrite, nonatomic, strong) UIColor *foreColor;
@property (readwrite, nonatomic) NSTextAlignment alignment;

+ (instancetype) menuItem:(NSString *) title
                    image:(UIImage *) image
                   target:(id)target
                   action:(SEL) action;

@end

typedef struct{
    CGFloat R;
    CGFloat G;
    CGFloat B;
    
}Color;

CG_INLINE Color
DavidColorMake(float R,float G,float B){
    Color color;
    color.R=R;
    color.G=G;
    color.B=B;
   return color;
}

typedef struct {
    CGFloat arrowSize;
    CGFloat marginXSpacing;
    CGFloat marginYSpacing;
    CGFloat intervalSpacing;
    CGFloat menuCornerRadius;
    Boolean maskToBackground;
    Boolean shadowOfMenu;
    Boolean hasSeperatorLine;
    Boolean seperatorLineHasInsets;
    Color textColor;
    Color menuBackgroundColor;
    
}OptionalConfiguration;

CG_INLINE OptionalConfiguration
DavidOptionalConfigurationMake(float arrowSize,float marginXSpacing,float marginYSpacing,float intervalSpacing,float menuCornerRadius,Boolean maskToBackground,Boolean shadowOfMenu,Boolean hasSeperatorLine,Boolean seperatorLineHasInsets,Color textColor,Color menuBackgroundColor ){
    OptionalConfiguration option;
    option.arrowSize= arrowSize; //指示箭头大小
    option.marginXSpacing=marginXSpacing ;  //MenuItem左右边距
    option.marginYSpacing= marginYSpacing;  //MenuItem上下边距
    option.intervalSpacing=intervalSpacing;  //MenuItemImage与MenuItemTitle的间距
    option.menuCornerRadius= menuCornerRadius;  //菜单圆角半径
    option.maskToBackground= maskToBackground;  //是否添加覆盖在原View上的半透明遮罩
    option.shadowOfMenu= shadowOfMenu;  //是否添加菜单阴影
    option.hasSeperatorLine=hasSeperatorLine;  //是否设置分割线
    option.seperatorLineHasInsets= seperatorLineHasInsets;  //是否在分割线两侧留下Insets
    option.textColor=textColor;  //menuItem字体颜色
    option.menuBackgroundColor=menuBackgroundColor; //菜单的底色
    return option;
    
}
@interface PopupMenu : UIView

@property (atomic, assign) OptionalConfiguration kxMenuViewOptions;

@end

@interface Popup : NSObject

+ (void) showMenuInView:(UIView *)view
               fromRect:(CGRect)rect
              menuItems:(NSArray *)menuItems
            withOptions:(OptionalConfiguration) options;

+ (void) dismissMenu;

+ (UIColor *) tintColor;
+ (void) setTintColor: (UIColor *) tintColor;

+ (UIFont *) titleFont;
+ (void) setTitleFont: (UIFont *) titleFont;

@end
