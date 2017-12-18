# PopupMenu
QQ菜单+号按钮弹出的可变菜单
在别人的基础上做了完善，称之为`DavidPopupMenu`。简称`DP`，有兴趣的可以用一下。
****

|Author|崔盛希|
|---|---
|E-mail|1300000608@qq.com

###使用方法
```Objective-c

- (IBAction)sender:(UIButton *)sender {
if (!sender.selected) {

NSArray*menuArr=@[[PopupMenuItem menuItem:@"我" image:[UIImage imageNamed:@"hyq"] target:self action:@selector(menuClick:)],[PopupMenuItem menuItem:@"爱" image:[UIImage imageNamed:@"hyq"] target:self action:@selector(menuClick:)],[PopupMenuItem menuItem:@"你" image:[UIImage imageNamed:@"hyq"] target:self action:@selector(menuClick:)],[PopupMenuItem menuItem:@"中" image:[UIImage imageNamed:@"hyq"] target:self action:@selector(menuClick:)],[PopupMenuItem menuItem:@"国" image:[UIImage imageNamed:@"hyq"] target:self action:@selector(menuClick:)]];
[Popup setTitleFont:[UIFont systemFontOfSize:15]];
OptionalConfiguration options=DavidOptionalConfigurationMake(9, 7, 9, 25, true, false, true, true, false, DavidColorMake(0, 0, 0), DavidColorMake(1, 1, 1));
[Popup showMenuInView:self.view fromRect:sender.frame menuItems:menuArr withOptions:options];    }else{
[Popup dismissMenu];

}

}

-(void)menuClick:(PopupMenuItem*)sender{
NSLog(@"===%@",sender.title);
}


```

***注意***
使用的图片不能太大了（小于单行的高度），大了会超出！一般都是使用的小图标。有兴趣的，可以再优化了！



