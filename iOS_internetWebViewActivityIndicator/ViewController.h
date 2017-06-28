//
//  ViewController.h
//  iOS_internetWebViewActivityIndicator
//
//  Created by TMA103 on 6/28/17.
//  Copyright © 2017 pvnghe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;


@end

