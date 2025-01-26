
"use strict";

let SetCurrentDirection = require('./SetCurrentDirection.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let GetCurrentModel = require('./GetCurrentModel.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')

module.exports = {
  SetCurrentDirection: SetCurrentDirection,
  SetCurrentVelocity: SetCurrentVelocity,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  GetCurrentModel: GetCurrentModel,
  TransformToSphericalCoord: TransformToSphericalCoord,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  SetCurrentModel: SetCurrentModel,
};
