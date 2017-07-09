//
//  UITableViewCell+FSAutoCountHeight.h
//  FSAutoAdjust-cellHeightDemo
//
//  Created by huim on 2017/7/7.
//  Copyright © 2017年 shunFSKi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (FSAutoCountHeightCell)

+ (CGFloat)FSCellHeightForTableView:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath cellContentViewWidth:(CGFloat)contentViewWidth;

@end
