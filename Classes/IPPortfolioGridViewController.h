//
//  IPPortfolioGridViewController.h
//
//  This class displays all of the galleries/sets of a portfolio in a 
//  |BDGridView|. The intent is to display this in a UINavigationController,
//  and when sets are tapped a |IPSetGridViewController| is pushed onto the
//  navigation stack.
//
//  Created by Brian Dewey on 4/23/11.
//  Copyright 2011 Brian Dewey. 
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "IPEditableTitleViewController.h"
#import "BDGridView.h"

@class IPPortfolio;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

@interface IPPortfolioGridViewController : IPEditableTitleViewController<
  BDGridViewDataSource,
  BDGridViewDelegate
> {
    
}

//
//  Interface Builder outlets.
//

@property (nonatomic, retain) IBOutlet BDGridView *gridView;

//
//  Tell the controller to look for images.
//

- (void)lookForFoundPictures;

@end
