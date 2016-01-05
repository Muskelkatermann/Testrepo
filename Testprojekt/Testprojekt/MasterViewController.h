//
//  MasterViewController.h
//  Testprojekt
//
//  Created by Malte Steenhusen on 05.01.16.
//  Copyright (c) 2016 Malte Steenhusen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

