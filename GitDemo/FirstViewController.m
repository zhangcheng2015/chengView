//
//  FirstViewController.m
//  GitDemo
//
//  Created by 深海 on 17/3/24.
//  Copyright © 2017年 一下. All rights reserved.
//

#import "FirstViewController.h"

@interface FirstViewController ()

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initUITableView];
    // Do any additional setup after loading the view.
}
-(void)initUITableView{

    NSLog(@"initUI");
}
-(void)initUI1{
    
    NSLog(@"initUI");
}
-(void)initUI2{
    
    NSLog(@"initUI");
}
-(void)initUI3{
    
    NSLog(@"initUI");
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
