//
// objc.io #3 sample code (http://www.objc.io/issue-3)
// Advanced Auto Layout Toolbox
//

///
/// This will add the call stack symbols to any NSLayoutConstraint that's added to a view.
///
/// This is disabled by default. In Debug builds, set the environment variable @c ObjcioLayoutConstraintsDebugging
///

@interface NSLayoutConstraint (ObjcioLayoutConstraintsDebugging)

@property (readonly, nonatomic, copy) NSArray *creationCallStackSymbols;

@end
