//
//  SearchViewController.h
//  CostList
//
//  Created by 许德鸿 on 2016/10/16.
//  Copyright © 2016年 XuDeHong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController

@property (strong,nonatomic) DataModelHandler *dataModelHandler;    //数据处理器
@property (assign, nonatomic, getter=isLeftMenuVisible) BOOL isVisible;

@end
