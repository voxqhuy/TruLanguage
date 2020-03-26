//
//  TruExpr.h
//  TruLanguage
//
//  Created by Huy Vo on 3/25/20.
//  Copyright © 2020 Huy Vo. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef TruExpr_h
#define TruExpr_h

@interface TruExpr

@end

@interface TruValue : TruExpr
@property BOOL value;
@end

@interface TruNot : TruExpr
@property TruExpr expression;
@end

@interface TruAnd : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruOr : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruNand : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruNor : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruXor : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruXnor : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruImply : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruEqual : TruExpr
@property TruExpr lhs;
@property TruExpr rhs;
@end

@interface TruMaj : TruExpr
@property TruExpr first;
@property TruExpr second;
@property TruExpr third;
@end

@interface TruId : TruExpr
@property id name;
@end

@interface TruCall : TruExpr
@property NSString
@property NSArray name;
@end


#endif /* TruExpr_h */
