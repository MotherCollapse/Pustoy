//
//  DetailViewController.h
//  PustoyEkran
//
//  Created by Александр Герасимов on 19.03.16.
//  Copyright © 2016 Александр Герасимов. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

