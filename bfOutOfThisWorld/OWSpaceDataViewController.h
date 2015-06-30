//
//  OWSpaceDataViewController.h
//  bfOutOfThisWorld
//
//  Created by Patrick Healey on 6/30/15.
//  Copyright (c) 2015 Pat Healey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;


@end
