//
//  ViewController.m
//  PopupMenuProj
//
//  Created by mac on 2017/12/18.
//  Copyright © 2017年 David. All rights reserved.
//

#import "ViewController.h"
#import "PopupMenu.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIButton *testBt;
@property (weak, nonatomic) IBOutlet UIButton *rightBt;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
      // Do any additional setup after loading the view, typically from a nib.
}
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

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
