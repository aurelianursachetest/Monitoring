//
//  UIMainMenuViewController.h
//  SmartTracking
//
//  Created by Mac OS X on 28/03/15.
//  Copyright (c) 2015 Mac OS X. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString *const UIPersonsCollectionViewItemIdentifier;

@interface UIMainMenuViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) IBOutlet UICollectionView *personsCollectionView;
@property (weak, nonatomic) IBOutlet UIButton *addPersonButton;

@end
