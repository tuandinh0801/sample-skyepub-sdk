//
//  BookViewController.swift
//  sample
//
//  Created by baotuan on 8/14/21.
//

import Foundation

@objc (BookViewManager)
class BookView: RCTViewManager {
  override static func requiresMainQueueSetup() -> Bool {
    return true
  }
  
  override func view() -> UIView! {
    return LabelView()
  }
}

class LabelView: UIView {
  override init(frame: CGRect) {
    super.init(frame: frame)
    let label = UILabel()
    label.text = "Swift Counter"
    label.textAlignment = .center
    label.textColor = .black
    label.font = .systemFont(ofSize: 40)
    
    self.addSubview(label)
  }
  
  required init?(coder: NSCoder) {
    super.init(coder: coder)
    
    let label = UILabel()
    label.text = "Swift Counter"
    label.textAlignment = .center
    label.textColor = .black
    label.font = .systemFont(ofSize: 40)

    self.addSubview(label)
  }
}
