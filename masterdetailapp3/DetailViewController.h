//
//  DetailViewController.h
//  masterdetailapp3
//
//  Created by Mayela Jackson on 10/27/13.
//  Copyright (c) 2013 Mayela Jackson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
