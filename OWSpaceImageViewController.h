//
//  OWSpaceImageViewController.h
//  bfOutOfThisWorld
//
//  Created by Patrick Healey on 6/29/15.
//  Copyright (c) 2015 Pat Healey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
